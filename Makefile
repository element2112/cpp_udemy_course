.PHONY: clean All

All:
	@echo "----------Building project:[ custom_deleter_for_shared_ptrs - Debug ]----------"
	@cd "custom_deleter_for_shared_ptrs" && "$(MAKE)" -f  "custom_deleter_for_shared_ptrs.mk"
clean:
	@echo "----------Cleaning project:[ custom_deleter_for_shared_ptrs - Debug ]----------"
	@cd "custom_deleter_for_shared_ptrs" && "$(MAKE)" -f  "custom_deleter_for_shared_ptrs.mk" clean
