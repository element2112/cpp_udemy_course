.PHONY: clean All

All:
	@echo "----------Building project:[ weak_pointers - Debug ]----------"
	@cd "weak_pointers" && "$(MAKE)" -f  "weak_pointers.mk"
clean:
	@echo "----------Cleaning project:[ weak_pointers - Debug ]----------"
	@cd "weak_pointers" && "$(MAKE)" -f  "weak_pointers.mk" clean
