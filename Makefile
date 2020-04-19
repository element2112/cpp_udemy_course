.PHONY: clean All

All:
	@echo "----------Building project:[ member_methods_2 - Debug ]----------"
	@cd "member_methods_2" && "$(MAKE)" -f  "member_methods_2.mk"
clean:
	@echo "----------Cleaning project:[ member_methods_2 - Debug ]----------"
	@cd "member_methods_2" && "$(MAKE)" -f  "member_methods_2.mk" clean
