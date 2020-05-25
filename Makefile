.PHONY: clean All

All:
	@echo "----------Building project:[ stream_manipulators_align_and_fill - Debug ]----------"
	@cd "stream_manipulators_align_and_fill" && "$(MAKE)" -f  "stream_manipulators_align_and_fill.mk"
clean:
	@echo "----------Cleaning project:[ stream_manipulators_align_and_fill - Debug ]----------"
	@cd "stream_manipulators_align_and_fill" && "$(MAKE)" -f  "stream_manipulators_align_and_fill.mk" clean
