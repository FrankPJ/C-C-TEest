APP_ABI := arm64-v8a
#APP_ABI := armeabi-v7a

#APP_ABI := all

#指定编译库为C++
LOCAL_CPPFLAGS := \
  -std=gnu11 \
  -Wall \
  -Wextra \
  -Wshadow \
  -Wunused \
  -Wwrite-strings \
  -Werror=format-security \
  -Werror=implicit-function-declaration \
  -Werror=implicit-int \
  -Werror=init-self \
  -Werror=missing-prototypes \
  -Werror=strict-prototypes \
  -Werror=undef \
  -Werror=uninitialized

# Workaround for MIPS toolchain linker being unable to find liblog dependency
# of shared object in NDK versions at least up to r9.
#
APP_LDFLAGS := -llog
