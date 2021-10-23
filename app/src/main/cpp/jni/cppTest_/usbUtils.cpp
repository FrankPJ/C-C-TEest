//
// Created by Administrator on 2021/10/22.
//

#include "usbUtils.h"




#include "logUtils.h"
#include <libusb_source/libusb.h>





int test_libusb_get_devices_list()
{
    // reference: examples/listdevs.c
    int ret = libusb_init(nullptr);
    if (ret != 0) {
        LOGE( "fail to init: %d\n", ret);
        return -1;
    }

    libusb_device** devs = nullptr;
    ssize_t count = libusb_get_device_list(nullptr, &devs);
    if (count < 0) {
        LOGE( "fail to get device list: %d\n", count);
        libusb_exit(nullptr);
        return -1;
    }

    libusb_device* dev = nullptr;
    int i = 0;

    while ((dev = devs[i++]) != nullptr) {
        struct libusb_device_descriptor desc{};
        ret = libusb_get_device_descriptor(dev, &desc);
        if (ret < 0) {
            LOGE( "fail to get device descriptor: %d\n", ret);
            return -1;
        }

        LOGE( "%04x:%04x (bus: %d, device: %d) ",
                desc.idVendor, desc.idProduct, libusb_get_bus_number(dev), libusb_get_device_address(dev));

        uint8_t path[8];
        ret = libusb_get_port_numbers(dev, path, sizeof(path));
        if (ret > 0) {
            LOGE( "path: %d", path[0]);
            for (int j = 1; j < ret; ++j)
                LOGE( ".%d", path[j]);
        }
        LOGE( "\n");
    }

    libusb_free_device_list(devs, 1);
    libusb_exit(nullptr);

    return 0;
}