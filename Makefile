.PHONY: clean All

All:
	@echo "----------Building project:[ stl_generics_templates - Debug ]----------"
	@cd "stl_generics_templates" && "$(MAKE)" -f  "stl_generics_templates.mk"
clean:
	@echo "----------Cleaning project:[ stl_generics_templates - Debug ]----------"
	@cd "stl_generics_templates" && "$(MAKE)" -f  "stl_generics_templates.mk" clean
