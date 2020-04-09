.PHONY: clean All

All:
	@echo "----------Building project:[ strings - Debug ]----------"
	@cd "strings" && "$(MAKE)" -f  "strings.mk"
clean:
	@echo "----------Cleaning project:[ strings - Debug ]----------"
	@cd "strings" && "$(MAKE)" -f  "strings.mk" clean
