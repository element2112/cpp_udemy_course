.PHONY: clean All

All:
	@echo "----------Building project:[ files_reading_from_txt_3 - Debug ]----------"
	@cd "files_reading_from_txt_3" && "$(MAKE)" -f  "files_reading_from_txt_3.mk"
clean:
	@echo "----------Cleaning project:[ files_reading_from_txt_3 - Debug ]----------"
	@cd "files_reading_from_txt_3" && "$(MAKE)" -f  "files_reading_from_txt_3.mk" clean
