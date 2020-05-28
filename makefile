cc = gcc
prom = bs_app
src = $(shell find ./ -name "*.c")
deps = $(shell find ./ -name "*.h")
obj = $(src:%.c=%.o)

$(prom):$(obj)
	$(cc) -o $(prom) $(obj)

%.o:%.c $(deps)
	$(cc) -c $< -o $@ 

clean:
	rm -rf $(obj) $(prom)
