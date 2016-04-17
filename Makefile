ifdef ARBIT_KERNEL_BUILD	
else 
ARBIT_KERNEL_BUILD:=/lib/modules/$(shell uname -r)/build
endif

obj-m += hello_world.o


all:
	make -C $(ARBIT_KERNEL_BUILD) M=$(PWD) modules

clean:
	make -C $(ARBIT_KERNEL_BUILD) M=$(PWD) clean
