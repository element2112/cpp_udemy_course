.PHONY: clean All

All:
	@echo "----------Building project:[ smart_pointers_unique_pointers - Debug ]----------"
	@cd "smart_pointers" && "$(MAKE)" -f  "smart_pointers_unique_pointers.mk"
clean:
	@echo "----------Cleaning project:[ smart_pointers_unique_pointers - Debug ]----------"
	@cd "smart_pointers" && "$(MAKE)" -f  "smart_pointers_unique_pointers.mk" clean
