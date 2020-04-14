.PHONY: clean All

All:
	@echo "----------Building project:[ pointers_and_mem_alloc - Debug ]----------"
	@cd "pointers" && "$(MAKE)" -f  "pointers_and_mem_alloc.mk"
clean:
	@echo "----------Cleaning project:[ pointers_and_mem_alloc - Debug ]----------"
	@cd "pointers" && "$(MAKE)" -f  "pointers_and_mem_alloc.mk" clean
