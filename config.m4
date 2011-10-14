PHP_ARG_ENABLE(helloworld, whether to enable helloworld support,
[  --enable-helloword            Enable helloworld support])

if test "$PHP_helloworld" != "no"; then
  PHP_NEW_EXTENSION(helloworld, helloworld.c, $ext_shared)
fi
