.PHONY: clean All

All:
	@echo "----------Building project:[ static_members - Debug ]----------"
	@cd "static_members" && "$(MAKE)" -f  "static_members.mk"
clean:
	@echo "----------Cleaning project:[ static_members - Debug ]----------"
	@cd "static_members" && "$(MAKE)" -f  "static_members.mk" clean
