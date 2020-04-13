.PHONY: clean All

All:
	@echo "----------Building project:[ functions_and_arrays - Debug ]----------"
	@cd "functions_and_arrays" && "$(MAKE)" -f  "functions_and_arrays.mk"
clean:
	@echo "----------Cleaning project:[ functions_and_arrays - Debug ]----------"
	@cd "functions_and_arrays" && "$(MAKE)" -f  "functions_and_arrays.mk" clean
