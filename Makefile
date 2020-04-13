.PHONY: clean All

All:
	@echo "----------Building project:[ scope - Debug ]----------"
	@cd "scope" && "$(MAKE)" -f  "scope.mk"
clean:
	@echo "----------Cleaning project:[ scope - Debug ]----------"
	@cd "scope" && "$(MAKE)" -f  "scope.mk" clean
