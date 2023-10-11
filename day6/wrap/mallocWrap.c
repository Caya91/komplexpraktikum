#define _GNU_SOURCE
#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>
#define STORE_SIZE 100

static struct store_t{ 
	void* ptr;
	size_t size;
}
static store_t[100] = { {NULL, 0 } };

static void* ptrs[100]= {NULL};


void*
malloc(size_t size)
{
	static malloc_ptr real_malloc = NULL;
	real_malloc = (malloc_ptr) dlsym(RTLD_NEXT, "malloc");
	
	ptrs[i] = real_mallock(size);
	i++;
	return ptrs[i-1;
	// implement me
}


void
free(void* ptr)
{
	static malloc_ptr real_free = NULL;
	real_free = (free_ptr) dlsym(RTLD_NEXT, "free");
	

	for (int i =0; i<10; i++){
		if( ptr[i] == ptrs){
			ptr[i] = NULL;
			return real_free(ptr);
		}
	}


	return NULL;

	// implement me
}
