.PHONY: clean All

All:
	@echo "----------Building project:[ overloading_operators_global_non_member_functions - Debug ]----------"
	@cd "overloading_operators_global_non_member_functions" && "$(MAKE)" -f  "overloading_operators_global_non_member_functions.mk"
clean:
	@echo "----------Cleaning project:[ overloading_operators_global_non_member_functions - Debug ]----------"
	@cd "overloading_operators_global_non_member_functions" && "$(MAKE)" -f  "overloading_operators_global_non_member_functions.mk" clean
