.PHONY: clean All

All:
	@echo "----------Building project:[ move_copy_constructor_inheritence - Debug ]----------"
	@cd "move_copy_constructor_inheritence" && "$(MAKE)" -f  "move_copy_constructor_inheritence.mk"
clean:
	@echo "----------Cleaning project:[ move_copy_constructor_inheritence - Debug ]----------"
	@cd "move_copy_constructor_inheritence" && "$(MAKE)" -f  "move_copy_constructor_inheritence.mk" clean
