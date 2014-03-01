##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=WinGui
ConfigurationName      :=Debug
WorkspacePath          := "C:\Users\vincenzo\Documents\Projects\WinGui"
ProjectPath            := "C:\Users\vincenzo\Documents\Projects\WinGui\WinGui"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=vincenzo
Date                   :=03/01/14
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
Objects0=$(IntermediateDirectory)/application$(ObjectSuffix) $(IntermediateDirectory)/message_dispatcher$(ObjectSuffix) $(IntermediateDirectory)/graphics$(ObjectSuffix) $(IntermediateDirectory)/error$(ObjectSuffix) $(IntermediateDirectory)/id_provider$(ObjectSuffix) $(IntermediateDirectory)/system_error$(ObjectSuffix) $(IntermediateDirectory)/window_builder$(ObjectSuffix) $(IntermediateDirectory)/model_window_model$(ObjectSuffix) $(IntermediateDirectory)/model_button_model$(ObjectSuffix) $(IntermediateDirectory)/controller_window_controller$(ObjectSuffix) \
	$(IntermediateDirectory)/controller_button_controller$(ObjectSuffix) $(IntermediateDirectory)/controller_controller_base$(ObjectSuffix) $(IntermediateDirectory)/factory_button_factory$(ObjectSuffix) $(IntermediateDirectory)/factory_window_factory$(ObjectSuffix) 



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
	@$(MakeDirCommand) "C:\Users\vincenzo\Documents\Projects\WinGui/.build-debug"
	@echo rebuilt > "C:\Users\vincenzo\Documents\Projects\WinGui/.build-debug/WinGui"

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
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/Projects/WinGui/WinGui/application.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/application$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/application$(DependSuffix): application.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/application$(ObjectSuffix) -MF$(IntermediateDirectory)/application$(DependSuffix) -MM "application.cpp"

$(IntermediateDirectory)/application$(PreprocessSuffix): application.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/application$(PreprocessSuffix) "application.cpp"

$(IntermediateDirectory)/message_dispatcher$(ObjectSuffix): message_dispatcher.cpp $(IntermediateDirectory)/message_dispatcher$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/Projects/WinGui/WinGui/message_dispatcher.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/message_dispatcher$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/message_dispatcher$(DependSuffix): message_dispatcher.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/message_dispatcher$(ObjectSuffix) -MF$(IntermediateDirectory)/message_dispatcher$(DependSuffix) -MM "message_dispatcher.cpp"

$(IntermediateDirectory)/message_dispatcher$(PreprocessSuffix): message_dispatcher.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/message_dispatcher$(PreprocessSuffix) "message_dispatcher.cpp"

$(IntermediateDirectory)/graphics$(ObjectSuffix): graphics.cpp $(IntermediateDirectory)/graphics$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/Projects/WinGui/WinGui/graphics.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/graphics$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/graphics$(DependSuffix): graphics.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/graphics$(ObjectSuffix) -MF$(IntermediateDirectory)/graphics$(DependSuffix) -MM "graphics.cpp"

$(IntermediateDirectory)/graphics$(PreprocessSuffix): graphics.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/graphics$(PreprocessSuffix) "graphics.cpp"

$(IntermediateDirectory)/error$(ObjectSuffix): error.cpp $(IntermediateDirectory)/error$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/Projects/WinGui/WinGui/error.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/error$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/error$(DependSuffix): error.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/error$(ObjectSuffix) -MF$(IntermediateDirectory)/error$(DependSuffix) -MM "error.cpp"

$(IntermediateDirectory)/error$(PreprocessSuffix): error.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/error$(PreprocessSuffix) "error.cpp"

$(IntermediateDirectory)/id_provider$(ObjectSuffix): id_provider.cpp $(IntermediateDirectory)/id_provider$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/Projects/WinGui/WinGui/id_provider.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/id_provider$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/id_provider$(DependSuffix): id_provider.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/id_provider$(ObjectSuffix) -MF$(IntermediateDirectory)/id_provider$(DependSuffix) -MM "id_provider.cpp"

$(IntermediateDirectory)/id_provider$(PreprocessSuffix): id_provider.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/id_provider$(PreprocessSuffix) "id_provider.cpp"

$(IntermediateDirectory)/system_error$(ObjectSuffix): system_error.cpp $(IntermediateDirectory)/system_error$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/Projects/WinGui/WinGui/system_error.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/system_error$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/system_error$(DependSuffix): system_error.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/system_error$(ObjectSuffix) -MF$(IntermediateDirectory)/system_error$(DependSuffix) -MM "system_error.cpp"

$(IntermediateDirectory)/system_error$(PreprocessSuffix): system_error.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/system_error$(PreprocessSuffix) "system_error.cpp"

$(IntermediateDirectory)/window_builder$(ObjectSuffix): window_builder.cpp $(IntermediateDirectory)/window_builder$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/Projects/WinGui/WinGui/window_builder.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/window_builder$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/window_builder$(DependSuffix): window_builder.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/window_builder$(ObjectSuffix) -MF$(IntermediateDirectory)/window_builder$(DependSuffix) -MM "window_builder.cpp"

$(IntermediateDirectory)/window_builder$(PreprocessSuffix): window_builder.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/window_builder$(PreprocessSuffix) "window_builder.cpp"

$(IntermediateDirectory)/model_window_model$(ObjectSuffix): model/window_model.cpp $(IntermediateDirectory)/model_window_model$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/Projects/WinGui/WinGui/model/window_model.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/model_window_model$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/model_window_model$(DependSuffix): model/window_model.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/model_window_model$(ObjectSuffix) -MF$(IntermediateDirectory)/model_window_model$(DependSuffix) -MM "model/window_model.cpp"

$(IntermediateDirectory)/model_window_model$(PreprocessSuffix): model/window_model.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/model_window_model$(PreprocessSuffix) "model/window_model.cpp"

$(IntermediateDirectory)/model_button_model$(ObjectSuffix): model/button_model.cpp $(IntermediateDirectory)/model_button_model$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/Projects/WinGui/WinGui/model/button_model.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/model_button_model$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/model_button_model$(DependSuffix): model/button_model.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/model_button_model$(ObjectSuffix) -MF$(IntermediateDirectory)/model_button_model$(DependSuffix) -MM "model/button_model.cpp"

$(IntermediateDirectory)/model_button_model$(PreprocessSuffix): model/button_model.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/model_button_model$(PreprocessSuffix) "model/button_model.cpp"

$(IntermediateDirectory)/controller_window_controller$(ObjectSuffix): controller/window_controller.cpp $(IntermediateDirectory)/controller_window_controller$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/Projects/WinGui/WinGui/controller/window_controller.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/controller_window_controller$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/controller_window_controller$(DependSuffix): controller/window_controller.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/controller_window_controller$(ObjectSuffix) -MF$(IntermediateDirectory)/controller_window_controller$(DependSuffix) -MM "controller/window_controller.cpp"

$(IntermediateDirectory)/controller_window_controller$(PreprocessSuffix): controller/window_controller.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/controller_window_controller$(PreprocessSuffix) "controller/window_controller.cpp"

$(IntermediateDirectory)/controller_button_controller$(ObjectSuffix): controller/button_controller.cpp $(IntermediateDirectory)/controller_button_controller$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/Projects/WinGui/WinGui/controller/button_controller.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/controller_button_controller$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/controller_button_controller$(DependSuffix): controller/button_controller.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/controller_button_controller$(ObjectSuffix) -MF$(IntermediateDirectory)/controller_button_controller$(DependSuffix) -MM "controller/button_controller.cpp"

$(IntermediateDirectory)/controller_button_controller$(PreprocessSuffix): controller/button_controller.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/controller_button_controller$(PreprocessSuffix) "controller/button_controller.cpp"

$(IntermediateDirectory)/controller_controller_base$(ObjectSuffix): controller/controller_base.cpp $(IntermediateDirectory)/controller_controller_base$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/Projects/WinGui/WinGui/controller/controller_base.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/controller_controller_base$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/controller_controller_base$(DependSuffix): controller/controller_base.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/controller_controller_base$(ObjectSuffix) -MF$(IntermediateDirectory)/controller_controller_base$(DependSuffix) -MM "controller/controller_base.cpp"

$(IntermediateDirectory)/controller_controller_base$(PreprocessSuffix): controller/controller_base.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/controller_controller_base$(PreprocessSuffix) "controller/controller_base.cpp"

$(IntermediateDirectory)/factory_button_factory$(ObjectSuffix): factory/button_factory.cpp $(IntermediateDirectory)/factory_button_factory$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/Projects/WinGui/WinGui/factory/button_factory.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/factory_button_factory$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/factory_button_factory$(DependSuffix): factory/button_factory.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/factory_button_factory$(ObjectSuffix) -MF$(IntermediateDirectory)/factory_button_factory$(DependSuffix) -MM "factory/button_factory.cpp"

$(IntermediateDirectory)/factory_button_factory$(PreprocessSuffix): factory/button_factory.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/factory_button_factory$(PreprocessSuffix) "factory/button_factory.cpp"

$(IntermediateDirectory)/factory_window_factory$(ObjectSuffix): factory/window_factory.cpp $(IntermediateDirectory)/factory_window_factory$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vincenzo/Documents/Projects/WinGui/WinGui/factory/window_factory.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/factory_window_factory$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/factory_window_factory$(DependSuffix): factory/window_factory.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/factory_window_factory$(ObjectSuffix) -MF$(IntermediateDirectory)/factory_window_factory$(DependSuffix) -MM "factory/window_factory.cpp"

$(IntermediateDirectory)/factory_window_factory$(PreprocessSuffix): factory/window_factory.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/factory_window_factory$(PreprocessSuffix) "factory/window_factory.cpp"


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
	$(RM) $(IntermediateDirectory)/window_builder$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/window_builder$(DependSuffix)
	$(RM) $(IntermediateDirectory)/window_builder$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/model_window_model$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/model_window_model$(DependSuffix)
	$(RM) $(IntermediateDirectory)/model_window_model$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/model_button_model$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/model_button_model$(DependSuffix)
	$(RM) $(IntermediateDirectory)/model_button_model$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/controller_window_controller$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/controller_window_controller$(DependSuffix)
	$(RM) $(IntermediateDirectory)/controller_window_controller$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/controller_button_controller$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/controller_button_controller$(DependSuffix)
	$(RM) $(IntermediateDirectory)/controller_button_controller$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/controller_controller_base$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/controller_controller_base$(DependSuffix)
	$(RM) $(IntermediateDirectory)/controller_controller_base$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/factory_button_factory$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/factory_button_factory$(DependSuffix)
	$(RM) $(IntermediateDirectory)/factory_button_factory$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/factory_window_factory$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/factory_window_factory$(DependSuffix)
	$(RM) $(IntermediateDirectory)/factory_window_factory$(PreprocessSuffix)
	$(RM) $(OutputFile)
	$(RM) $(OutputFile)
	$(RM) "../.build-debug/WinGui"


