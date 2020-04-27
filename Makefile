.PHONY: clean All

All:
	@echo "----------Building project:[ overloading_operator - Debug ]----------"
	@cd "overloading_operator" && "$(MAKE)" -f  "overloading_operator.mk"
clean:
	@echo "----------Cleaning project:[ overloading_operator - Debug ]----------"
	@cd "overloading_operator" && "$(MAKE)" -f  "overloading_operator.mk" clean
