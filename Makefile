.PHONY: clean All

All:
	@echo "----------Building project:[ stream_manipulators - Debug ]----------"
	@cd "streams_files_IO" && "$(MAKE)" -f  "stream_manipulators.mk"
clean:
	@echo "----------Cleaning project:[ stream_manipulators - Debug ]----------"
	@cd "streams_files_IO" && "$(MAKE)" -f  "stream_manipulators.mk" clean
