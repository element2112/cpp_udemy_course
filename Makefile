.PHONY: clean All

All:
	@echo "----------Building project:[ BaseClass_initialization - Debug ]----------"
	@cd "BaseClass_initialization" && "$(MAKE)" -f  "BaseClass_initialization.mk"
clean:
	@echo "----------Cleaning project:[ BaseClass_initialization - Debug ]----------"
	@cd "BaseClass_initialization" && "$(MAKE)" -f  "BaseClass_initialization.mk" clean
