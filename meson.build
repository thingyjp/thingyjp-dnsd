project('dnsd', 'c')

dnsd_deps = [ dependency('libcares') ]
dnsd_src = [ 'dnsd.c' ]
dnsd = executable('dnsd', dnsd_src,
                  install: true,
                  dependencies: dnsd_deps)

nssmodule_src = [ 'nssmodule.c' ]
nssmodule = shared_library('nss_dnsd', nssmodule_src,
                soversion : 2,
                install : true)