.PHONY: clean All

All:
	@echo "----------Building project:[ files_writing_to_txt - Debug ]----------"
	@cd "files_writing_to_txt" && "$(MAKE)" -f  "files_writing_to_txt.mk"
clean:
	@echo "----------Cleaning project:[ files_writing_to_txt - Debug ]----------"
	@cd "files_writing_to_txt" && "$(MAKE)" -f  "files_writing_to_txt.mk" clean
