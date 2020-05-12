.PHONY: clean All

All:
	@echo "----------Building project:[ shared_pointers - Debug ]----------"
	@cd "shared_pointers" && "$(MAKE)" -f  "shared_pointers.mk"
clean:
	@echo "----------Cleaning project:[ shared_pointers - Debug ]----------"
	@cd "shared_pointers" && "$(MAKE)" -f  "shared_pointers.mk" clean
