SUBDIRS := subdir

all: 
    for dir in $(SUBDIRS); do \
        $(MAKE) -C $$dir; \
    done
