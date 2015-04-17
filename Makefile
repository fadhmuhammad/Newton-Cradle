.PHONY: clean All

All:
	@echo "----------Building project:[ Newton-Cradle - Debug ]----------"
	@cd "Newton-Cradle" && $(MAKE) -f  "Newton-Cradle.mk"
clean:
	@echo "----------Cleaning project:[ Newton-Cradle - Debug ]----------"
	@cd "Newton-Cradle" && $(MAKE) -f  "Newton-Cradle.mk" clean
