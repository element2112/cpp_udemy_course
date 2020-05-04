.PHONY: clean All

All:
	@echo "----------Building project:[ final_specifier - Debug ]----------"
	@cd "final_specifier" && "$(MAKE)" -f  "final_specifier.mk"
clean:
	@echo "----------Cleaning project:[ final_specifier - Debug ]----------"
	@cd "final_specifier" && "$(MAKE)" -f  "final_specifier.mk" clean
