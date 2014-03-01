.PHONY: clean All

All:
	@echo "----------Building project:[ WinGui - Debug ]----------"
	@cd "WinGui" && $(MAKE) -f  "WinGui.mk" && $(MAKE) -f  "WinGui.mk" PostBuild
	@echo "----------Building project:[ Example - Debug ]----------"
	@cd "Example" && $(MAKE) -f  "Example.mk"
clean:
	@echo "----------Cleaning project:[ WinGui - Debug ]----------"
	@cd "WinGui" && $(MAKE) -f  "WinGui.mk"  clean
	@echo "----------Cleaning project:[ Example - Debug ]----------"
	@cd "Example" && $(MAKE) -f  "Example.mk" clean
