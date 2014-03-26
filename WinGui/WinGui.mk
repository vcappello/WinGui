##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=WinGui
ConfigurationName      :=Debug
WorkspacePath          := "C:\Users\vincenzo\Documents\GitHub\WinGui"
ProjectPath            := "C:\Users\vincenzo\Documents\GitHub\WinGui\WinGui"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=vincenzo
Date                   :=03/26/14
CodeLitePath           :="C:\Program Files (x86)\CodeLite"
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName).dll
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="WinGui.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=windres
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)gdi32 
ArLibs                 :=  "gdi32" 
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -std=c++11 $(Preprocessors)
CFLAGS   :=  -g $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files (x86)\CodeLite
UNIT_TEST_PP_SRC_DIR:=C:\UnitTest++
Objects0=$(IntermediateDirectory)/application$(ObjectSuffix) $(IntermediateDirectory)/message_dispatcher$(ObjectSuffix) $(IntermediateDirectory)/graphics$(ObjectSuffix) $(IntermediateDirectory)/error$(ObjectSuffix) $(IntermediateDirectory)/id_provider$(ObjectSuffix) $(IntermediateDirectory)/system_error$(ObjectSuffix) $(IntermediateDirectory)/model_window_model$(ObjectSuffix) $(IntermediateDirectory)/model_button_model$(ObjectSuffix) $(IntermediateDirectory)/model_edit_model$(ObjectSuffix) $(IntermediateDirectory)/model_control_base_model$(ObjectSuffix) \
	$(IntermediateDirectory)/model_font_model$(ObjectSuffix) $(IntermediateDirectory)/model_point$(ObjectSuffix) $(IntermediateDirectory)/model_size$(ObjectSuffix) $(IntermediateDirectory)/controller_window_controller$(ObjectSuffix) $(IntermediateDirectory)/controller_button_controller$(ObjectSuffix) $(IntermediateDirectory)/controller_abstract_windowed_controller$(ObjectSuffix) $(IntermediateDirectory)/controller_edit_controller$(ObjectSuffix) $(IntermediateDirectory)/factory_button_factory$(ObjectSuffix) $(IntermediateDirectory)/factory_window_factory$(ObjectSuffix) $(IntermediateDirectory)/factory_edit_factory$(ObjectSuffix) \
	$(IntermediateDirectory)/factory_font_factory$(ObjectSuffix) $(IntermediateDirectory)/handler_font_handler$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(SharedObjectLinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)
	@$(MakeDirCommand) "C:\Users\vincenzo\Documents\GitHub\WinGui/.build-debug"
	@echo rebuilt > "C:\Users\vincenzo\Documents\GitHub\WinGui/.build-debug/WinGui"

PostBuild:
	@echo Executing Post Build commands ...
	COPY /Y $(WorkspacePath)\WinGui\Debug\WinGui.dll $(WorkspacePath)\Example\Debug\WinGui.dll
	@echo Done

$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/application$(ObjectSuffix): application.cpp $(IntermediateDirectory)/application$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/GitHub/WinGui/WinGui/application.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/application$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/application$(DependSuffix): application.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/application$(ObjectSuffix) -MF$(IntermediateDirectory)/application$(DependSuffix) -MM "application.cpp"

$(IntermediateDirectory)/application$(PreprocessSuffix): application.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/application$(PreprocessSuffix) "application.cpp"

$(IntermediateDirectory)/message_dispatcher$(ObjectSuffix): message_dispatcher.cpp $(IntermediateDirectory)/message_dispatcher$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/GitHub/WinGui/WinGui/message_dispatcher.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/message_dispatcher$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/message_dispatcher$(DependSuffix): message_dispatcher.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/message_dispatcher$(ObjectSuffix) -MF$(IntermediateDirectory)/message_dispatcher$(DependSuffix) -MM "message_dispatcher.cpp"

$(IntermediateDirectory)/message_dispatcher$(PreprocessSuffix): message_dispatcher.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/message_dispatcher$(PreprocessSuffix) "message_dispatcher.cpp"

$(IntermediateDirectory)/graphics$(ObjectSuffix): graphics.cpp $(IntermediateDirectory)/graphics$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/GitHub/WinGui/WinGui/graphics.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/graphics$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/graphics$(DependSuffix): graphics.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/graphics$(ObjectSuffix) -MF$(IntermediateDirectory)/graphics$(DependSuffix) -MM "graphics.cpp"

$(IntermediateDirectory)/graphics$(PreprocessSuffix): graphics.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/graphics$(PreprocessSuffix) "graphics.cpp"

$(IntermediateDirectory)/error$(ObjectSuffix): error.cpp $(IntermediateDirectory)/error$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/GitHub/WinGui/WinGui/error.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/error$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/error$(DependSuffix): error.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/error$(ObjectSuffix) -MF$(IntermediateDirectory)/error$(DependSuffix) -MM "error.cpp"

$(IntermediateDirectory)/error$(PreprocessSuffix): error.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/error$(PreprocessSuffix) "error.cpp"

$(IntermediateDirectory)/id_provider$(ObjectSuffix): id_provider.cpp $(IntermediateDirectory)/id_provider$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/GitHub/WinGui/WinGui/id_provider.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/id_provider$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/id_provider$(DependSuffix): id_provider.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/id_provider$(ObjectSuffix) -MF$(IntermediateDirectory)/id_provider$(DependSuffix) -MM "id_provider.cpp"

$(IntermediateDirectory)/id_provider$(PreprocessSuffix): id_provider.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/id_provider$(PreprocessSuffix) "id_provider.cpp"

$(IntermediateDirectory)/system_error$(ObjectSuffix): system_error.cpp $(IntermediateDirectory)/system_error$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/GitHub/WinGui/WinGui/system_error.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/system_error$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/system_error$(DependSuffix): system_error.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/system_error$(ObjectSuffix) -MF$(IntermediateDirectory)/system_error$(DependSuffix) -MM "system_error.cpp"

$(IntermediateDirectory)/system_error$(PreprocessSuffix): system_error.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/system_error$(PreprocessSuffix) "system_error.cpp"

$(IntermediateDirectory)/model_window_model$(ObjectSuffix): model/window_model.cpp $(IntermediateDirectory)/model_window_model$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/GitHub/WinGui/WinGui/model/window_model.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/model_window_model$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/model_window_model$(DependSuffix): model/window_model.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/model_window_model$(ObjectSuffix) -MF$(IntermediateDirectory)/model_window_model$(DependSuffix) -MM "model/window_model.cpp"

$(IntermediateDirectory)/model_window_model$(PreprocessSuffix): model/window_model.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/model_window_model$(PreprocessSuffix) "model/window_model.cpp"

$(IntermediateDirectory)/model_button_model$(ObjectSuffix): model/button_model.cpp $(IntermediateDirectory)/model_button_model$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/GitHub/WinGui/WinGui/model/button_model.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/model_button_model$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/model_button_model$(DependSuffix): model/button_model.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/model_button_model$(ObjectSuffix) -MF$(IntermediateDirectory)/model_button_model$(DependSuffix) -MM "model/button_model.cpp"

$(IntermediateDirectory)/model_button_model$(PreprocessSuffix): model/button_model.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/model_button_model$(PreprocessSuffix) "model/button_model.cpp"

$(IntermediateDirectory)/model_edit_model$(ObjectSuffix): model/edit_model.cpp $(IntermediateDirectory)/model_edit_model$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/GitHub/WinGui/WinGui/model/edit_model.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/model_edit_model$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/model_edit_model$(DependSuffix): model/edit_model.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/model_edit_model$(ObjectSuffix) -MF$(IntermediateDirectory)/model_edit_model$(DependSuffix) -MM "model/edit_model.cpp"

$(IntermediateDirectory)/model_edit_model$(PreprocessSuffix): model/edit_model.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/model_edit_model$(PreprocessSuffix) "model/edit_model.cpp"

$(IntermediateDirectory)/model_control_base_model$(ObjectSuffix): model/control_base_model.cpp $(IntermediateDirectory)/model_control_base_model$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/GitHub/WinGui/WinGui/model/control_base_model.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/model_control_base_model$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/model_control_base_model$(DependSuffix): model/control_base_model.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/model_control_base_model$(ObjectSuffix) -MF$(IntermediateDirectory)/model_control_base_model$(DependSuffix) -MM "model/control_base_model.cpp"

$(IntermediateDirectory)/model_control_base_model$(PreprocessSuffix): model/control_base_model.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/model_control_base_model$(PreprocessSuffix) "model/control_base_model.cpp"

$(IntermediateDirectory)/model_font_model$(ObjectSuffix): model/font_model.cpp $(IntermediateDirectory)/model_font_model$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/GitHub/WinGui/WinGui/model/font_model.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/model_font_model$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/model_font_model$(DependSuffix): model/font_model.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/model_font_model$(ObjectSuffix) -MF$(IntermediateDirectory)/model_font_model$(DependSuffix) -MM "model/font_model.cpp"

$(IntermediateDirectory)/model_font_model$(PreprocessSuffix): model/font_model.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/model_font_model$(PreprocessSuffix) "model/font_model.cpp"

$(IntermediateDirectory)/model_point$(ObjectSuffix): model/point.cpp $(IntermediateDirectory)/model_point$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/GitHub/WinGui/WinGui/model/point.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/model_point$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/model_point$(DependSuffix): model/point.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/model_point$(ObjectSuffix) -MF$(IntermediateDirectory)/model_point$(DependSuffix) -MM "model/point.cpp"

$(IntermediateDirectory)/model_point$(PreprocessSuffix): model/point.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/model_point$(PreprocessSuffix) "model/point.cpp"

$(IntermediateDirectory)/model_size$(ObjectSuffix): model/size.cpp $(IntermediateDirectory)/model_size$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/GitHub/WinGui/WinGui/model/size.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/model_size$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/model_size$(DependSuffix): model/size.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/model_size$(ObjectSuffix) -MF$(IntermediateDirectory)/model_size$(DependSuffix) -MM "model/size.cpp"

$(IntermediateDirectory)/model_size$(PreprocessSuffix): model/size.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/model_size$(PreprocessSuffix) "model/size.cpp"

$(IntermediateDirectory)/controller_window_controller$(ObjectSuffix): controller/window_controller.cpp $(IntermediateDirectory)/controller_window_controller$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/GitHub/WinGui/WinGui/controller/window_controller.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/controller_window_controller$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/controller_window_controller$(DependSuffix): controller/window_controller.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/controller_window_controller$(ObjectSuffix) -MF$(IntermediateDirectory)/controller_window_controller$(DependSuffix) -MM "controller/window_controller.cpp"

$(IntermediateDirectory)/controller_window_controller$(PreprocessSuffix): controller/window_controller.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/controller_window_controller$(PreprocessSuffix) "controller/window_controller.cpp"

$(IntermediateDirectory)/controller_button_controller$(ObjectSuffix): controller/button_controller.cpp $(IntermediateDirectory)/controller_button_controller$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/GitHub/WinGui/WinGui/controller/button_controller.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/controller_button_controller$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/controller_button_controller$(DependSuffix): controller/button_controller.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/controller_button_controller$(ObjectSuffix) -MF$(IntermediateDirectory)/controller_button_controller$(DependSuffix) -MM "controller/button_controller.cpp"

$(IntermediateDirectory)/controller_button_controller$(PreprocessSuffix): controller/button_controller.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/controller_button_controller$(PreprocessSuffix) "controller/button_controller.cpp"

$(IntermediateDirectory)/controller_abstract_windowed_controller$(ObjectSuffix): controller/abstract_windowed_controller.cpp $(IntermediateDirectory)/controller_abstract_windowed_controller$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/GitHub/WinGui/WinGui/controller/abstract_windowed_controller.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/controller_abstract_windowed_controller$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/controller_abstract_windowed_controller$(DependSuffix): controller/abstract_windowed_controller.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/controller_abstract_windowed_controller$(ObjectSuffix) -MF$(IntermediateDirectory)/controller_abstract_windowed_controller$(DependSuffix) -MM "controller/abstract_windowed_controller.cpp"

$(IntermediateDirectory)/controller_abstract_windowed_controller$(PreprocessSuffix): controller/abstract_windowed_controller.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/controller_abstract_windowed_controller$(PreprocessSuffix) "controller/abstract_windowed_controller.cpp"

$(IntermediateDirectory)/controller_edit_controller$(ObjectSuffix): controller/edit_controller.cpp $(IntermediateDirectory)/controller_edit_controller$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/GitHub/WinGui/WinGui/controller/edit_controller.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/controller_edit_controller$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/controller_edit_controller$(DependSuffix): controller/edit_controller.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/controller_edit_controller$(ObjectSuffix) -MF$(IntermediateDirectory)/controller_edit_controller$(DependSuffix) -MM "controller/edit_controller.cpp"

$(IntermediateDirectory)/controller_edit_controller$(PreprocessSuffix): controller/edit_controller.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/controller_edit_controller$(PreprocessSuffix) "controller/edit_controller.cpp"

$(IntermediateDirectory)/factory_button_factory$(ObjectSuffix): factory/button_factory.cpp $(IntermediateDirectory)/factory_button_factory$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/GitHub/WinGui/WinGui/factory/button_factory.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/factory_button_factory$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/factory_button_factory$(DependSuffix): factory/button_factory.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/factory_button_factory$(ObjectSuffix) -MF$(IntermediateDirectory)/factory_button_factory$(DependSuffix) -MM "factory/button_factory.cpp"

$(IntermediateDirectory)/factory_button_factory$(PreprocessSuffix): factory/button_factory.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/factory_button_factory$(PreprocessSuffix) "factory/button_factory.cpp"

$(IntermediateDirectory)/factory_window_factory$(ObjectSuffix): factory/window_factory.cpp $(IntermediateDirectory)/factory_window_factory$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/GitHub/WinGui/WinGui/factory/window_factory.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/factory_window_factory$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/factory_window_factory$(DependSuffix): factory/window_factory.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/factory_window_factory$(ObjectSuffix) -MF$(IntermediateDirectory)/factory_window_factory$(DependSuffix) -MM "factory/window_factory.cpp"

$(IntermediateDirectory)/factory_window_factory$(PreprocessSuffix): factory/window_factory.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/factory_window_factory$(PreprocessSuffix) "factory/window_factory.cpp"

$(IntermediateDirectory)/factory_edit_factory$(ObjectSuffix): factory/edit_factory.cpp $(IntermediateDirectory)/factory_edit_factory$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/GitHub/WinGui/WinGui/factory/edit_factory.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/factory_edit_factory$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/factory_edit_factory$(DependSuffix): factory/edit_factory.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/factory_edit_factory$(ObjectSuffix) -MF$(IntermediateDirectory)/factory_edit_factory$(DependSuffix) -MM "factory/edit_factory.cpp"

$(IntermediateDirectory)/factory_edit_factory$(PreprocessSuffix): factory/edit_factory.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/factory_edit_factory$(PreprocessSuffix) "factory/edit_factory.cpp"

$(IntermediateDirectory)/factory_font_factory$(ObjectSuffix): factory/font_factory.cpp $(IntermediateDirectory)/factory_font_factory$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/GitHub/WinGui/WinGui/factory/font_factory.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/factory_font_factory$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/factory_font_factory$(DependSuffix): factory/font_factory.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/factory_font_factory$(ObjectSuffix) -MF$(IntermediateDirectory)/factory_font_factory$(DependSuffix) -MM "factory/font_factory.cpp"

$(IntermediateDirectory)/factory_font_factory$(PreprocessSuffix): factory/font_factory.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/factory_font_factory$(PreprocessSuffix) "factory/font_factory.cpp"

$(IntermediateDirectory)/handler_font_handler$(ObjectSuffix): handler/font_handler.cpp $(IntermediateDirectory)/handler_font_handler$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/GitHub/WinGui/WinGui/handler/font_handler.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/handler_font_handler$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/handler_font_handler$(DependSuffix): handler/font_handler.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/handler_font_handler$(ObjectSuffix) -MF$(IntermediateDirectory)/handler_font_handler$(DependSuffix) -MM "handler/font_handler.cpp"

$(IntermediateDirectory)/handler_font_handler$(PreprocessSuffix): handler/font_handler.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/handler_font_handler$(PreprocessSuffix) "handler/font_handler.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) $(IntermediateDirectory)/application$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/application$(DependSuffix)
	$(RM) $(IntermediateDirectory)/application$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/message_dispatcher$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/message_dispatcher$(DependSuffix)
	$(RM) $(IntermediateDirectory)/message_dispatcher$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/graphics$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/graphics$(DependSuffix)
	$(RM) $(IntermediateDirectory)/graphics$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/error$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/error$(DependSuffix)
	$(RM) $(IntermediateDirectory)/error$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/id_provider$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/id_provider$(DependSuffix)
	$(RM) $(IntermediateDirectory)/id_provider$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/system_error$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/system_error$(DependSuffix)
	$(RM) $(IntermediateDirectory)/system_error$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/model_window_model$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/model_window_model$(DependSuffix)
	$(RM) $(IntermediateDirectory)/model_window_model$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/model_button_model$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/model_button_model$(DependSuffix)
	$(RM) $(IntermediateDirectory)/model_button_model$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/model_edit_model$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/model_edit_model$(DependSuffix)
	$(RM) $(IntermediateDirectory)/model_edit_model$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/model_control_base_model$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/model_control_base_model$(DependSuffix)
	$(RM) $(IntermediateDirectory)/model_control_base_model$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/model_font_model$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/model_font_model$(DependSuffix)
	$(RM) $(IntermediateDirectory)/model_font_model$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/model_point$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/model_point$(DependSuffix)
	$(RM) $(IntermediateDirectory)/model_point$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/model_size$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/model_size$(DependSuffix)
	$(RM) $(IntermediateDirectory)/model_size$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/controller_window_controller$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/controller_window_controller$(DependSuffix)
	$(RM) $(IntermediateDirectory)/controller_window_controller$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/controller_button_controller$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/controller_button_controller$(DependSuffix)
	$(RM) $(IntermediateDirectory)/controller_button_controller$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/controller_abstract_windowed_controller$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/controller_abstract_windowed_controller$(DependSuffix)
	$(RM) $(IntermediateDirectory)/controller_abstract_windowed_controller$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/controller_edit_controller$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/controller_edit_controller$(DependSuffix)
	$(RM) $(IntermediateDirectory)/controller_edit_controller$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/factory_button_factory$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/factory_button_factory$(DependSuffix)
	$(RM) $(IntermediateDirectory)/factory_button_factory$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/factory_window_factory$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/factory_window_factory$(DependSuffix)
	$(RM) $(IntermediateDirectory)/factory_window_factory$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/factory_edit_factory$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/factory_edit_factory$(DependSuffix)
	$(RM) $(IntermediateDirectory)/factory_edit_factory$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/factory_font_factory$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/factory_font_factory$(DependSuffix)
	$(RM) $(IntermediateDirectory)/factory_font_factory$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/handler_font_handler$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/handler_font_handler$(DependSuffix)
	$(RM) $(IntermediateDirectory)/handler_font_handler$(PreprocessSuffix)
	$(RM) $(OutputFile)
	$(RM) $(OutputFile)
	$(RM) "../.build-debug/WinGui"


