.PHONY: clean All

All:
	@echo "----------Building project:[ stl_class_template - Debug ]----------"
	@cd "stl_class_template" && "$(MAKE)" -f  "stl_class_template.mk"
clean:
	@echo "----------Cleaning project:[ stl_class_template - Debug ]----------"
	@cd "stl_class_template" && "$(MAKE)" -f  "stl_class_template.mk" clean
