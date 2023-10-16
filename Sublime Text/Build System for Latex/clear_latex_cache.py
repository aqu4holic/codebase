import shutil
import os
import sys

# shutil.rmtree(file_name + '.aux')
# shutil.rmtree(file_name + '.log')
# shutil.rmtree(file_name + '.out')
# shutil.rmtree(file_name + '.toc')

def clear_cache(file_name):
	file_name_without_ext, ext = file_name.split('.')

	cache_exts = ['.aux', '.log', '.out', '.toc', '.nav', '.snm']
	r = 0

	for cache_ext in cache_exts:
		try:
			os.remove(file_name_without_ext + cache_ext)
			r += 1
		except:
			continue

	if (r):
		print(f'{file_name}: removed cache')
	else:
		print(f'{file_name}: no file removed')

	# try:
	# 	os.remove(file_name_without_ext + '.aux')
	# 	os.remove(file_name_without_ext + '.log')
	# 	os.remove(file_name_without_ext + '.out')
	# 	os.remove(file_name_without_ext + '.toc')

	# 	print(f'{file_name}: removed cache')
	# except:
	# 	print(f'{file_name}: no file removed')

if (__name__ == '__main__'):
	clear_cache(sys.argv[1])