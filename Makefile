.PHONY: clean All

All:
	@echo "----------Building project:[ Section13 - Debug ]----------"
	@cd "Section13" && "$(MAKE)" -f  "Section13.mk"
clean:
	@echo "----------Cleaning project:[ Section13 - Debug ]----------"
	@cd "Section13" && "$(MAKE)" -f  "Section13.mk" clean
