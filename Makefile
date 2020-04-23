.PHONY: clean All

All:
	@echo "----------Building project:[ constructor_stuff - Debug ]----------"
	@cd "constructor_stuff" && "$(MAKE)" -f  "constructor_stuff.mk"
clean:
	@echo "----------Cleaning project:[ constructor_stuff - Debug ]----------"
	@cd "constructor_stuff" && "$(MAKE)" -f  "constructor_stuff.mk" clean
