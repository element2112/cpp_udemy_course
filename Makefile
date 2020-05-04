.PHONY: clean All

All:
	@echo "----------Building project:[ abstract_classes_as_interface - Debug ]----------"
	@cd "abstract_classes_as_interface" && "$(MAKE)" -f  "abstract_classes_as_interface.mk"
clean:
	@echo "----------Cleaning project:[ abstract_classes_as_interface - Debug ]----------"
	@cd "abstract_classes_as_interface" && "$(MAKE)" -f  "abstract_classes_as_interface.mk" clean
