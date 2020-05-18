.PHONY: clean All

All:
	@echo "----------Building project:[ exception_handling_2 - Debug ]----------"
	@cd "exception_handling_2" && "$(MAKE)" -f  "exception_handling_2.mk"
clean:
	@echo "----------Cleaning project:[ exception_handling_2 - Debug ]----------"
	@cd "exception_handling_2" && "$(MAKE)" -f  "exception_handling_2.mk" clean
