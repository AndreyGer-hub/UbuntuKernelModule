obj-m := 1.o

KDIR := /home/andrey/linux-5.15.7/ 
all:
	$(MAKE) -C $(KDIR) M=`pwd` modules