include_defs('//BUCKAROO_DEPS')

def merge_dicts(x, y):
  z = x.copy()
  z.update(y)
  return z

cxx_library(
  name = 'uwebsockets',
  header_namespace = 'uWS',
  exported_headers = subdir_glob([
    ('src', '**/*.h'),
  ]), 
  srcs = glob([
    'src/**/*.cpp',
  ]),
  preprocessor_flags = [
    '-DUSE_LIBUV=1',
  ],
  deps = BUCKAROO_DEPS,
  visibility = [
    'PUBLIC',
  ],
)
