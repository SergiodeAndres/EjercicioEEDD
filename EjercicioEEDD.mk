##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=EjercicioEEDD
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/sergi/OneDrive/Documentos/Documentos
ProjectPath            :=C:/Users/sergi/OneDrive/Documentos/Documentos/EjercicioEEDD
IntermediateDirectory  :=../build-$(ConfigurationName)/EjercicioEEDD
OutDir                 :=../build-$(ConfigurationName)/EjercicioEEDD
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=sergi
Date                   :=01/01/2022
CodeLitePath           :=D:/CodeLite
LinkerName             :=C:/mingw64/bin/g++.exe
SharedObjectLinkerName :=C:/mingw64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/mingw64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/mingw64/bin/ar.exe rcu
CXX      := C:/mingw64/bin/g++.exe
CC       := C:/mingw64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/mingw64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=D:\CodeLite
Objects0=../build-$(ConfigurationName)/EjercicioEEDD/DicTreeData.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/EjercicioEEDD/DicTreeElem.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/EjercicioEEDD/ListElement.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/EjercicioEEDD/QueueElement.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/EjercicioEEDD/List.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/EjercicioEEDD/Queue.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/EjercicioEEDD/ListElementData.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/EjercicioEEDD/QueueElementData.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/EjercicioEEDD/Core.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/EjercicioEEDD/main.cpp$(ObjectSuffix) \
	../build-$(ConfigurationName)/EjercicioEEDD/DicTree.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/EjercicioEEDD/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\EjercicioEEDD" mkdir "..\build-$(ConfigurationName)\EjercicioEEDD"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\EjercicioEEDD" mkdir "..\build-$(ConfigurationName)\EjercicioEEDD"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/EjercicioEEDD/.d:
	@if not exist "..\build-$(ConfigurationName)\EjercicioEEDD" mkdir "..\build-$(ConfigurationName)\EjercicioEEDD"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/EjercicioEEDD/DicTreeData.cpp$(ObjectSuffix): DicTreeData.cpp ../build-$(ConfigurationName)/EjercicioEEDD/DicTreeData.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/sergi/OneDrive/Documentos/Documentos/EjercicioEEDD/DicTreeData.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/DicTreeData.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/EjercicioEEDD/DicTreeData.cpp$(DependSuffix): DicTreeData.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/EjercicioEEDD/DicTreeData.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/EjercicioEEDD/DicTreeData.cpp$(DependSuffix) -MM DicTreeData.cpp

../build-$(ConfigurationName)/EjercicioEEDD/DicTreeData.cpp$(PreprocessSuffix): DicTreeData.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/EjercicioEEDD/DicTreeData.cpp$(PreprocessSuffix) DicTreeData.cpp

../build-$(ConfigurationName)/EjercicioEEDD/DicTreeElem.cpp$(ObjectSuffix): DicTreeElem.cpp ../build-$(ConfigurationName)/EjercicioEEDD/DicTreeElem.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/sergi/OneDrive/Documentos/Documentos/EjercicioEEDD/DicTreeElem.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/DicTreeElem.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/EjercicioEEDD/DicTreeElem.cpp$(DependSuffix): DicTreeElem.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/EjercicioEEDD/DicTreeElem.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/EjercicioEEDD/DicTreeElem.cpp$(DependSuffix) -MM DicTreeElem.cpp

../build-$(ConfigurationName)/EjercicioEEDD/DicTreeElem.cpp$(PreprocessSuffix): DicTreeElem.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/EjercicioEEDD/DicTreeElem.cpp$(PreprocessSuffix) DicTreeElem.cpp

../build-$(ConfigurationName)/EjercicioEEDD/ListElement.cpp$(ObjectSuffix): ListElement.cpp ../build-$(ConfigurationName)/EjercicioEEDD/ListElement.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/sergi/OneDrive/Documentos/Documentos/EjercicioEEDD/ListElement.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ListElement.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/EjercicioEEDD/ListElement.cpp$(DependSuffix): ListElement.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/EjercicioEEDD/ListElement.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/EjercicioEEDD/ListElement.cpp$(DependSuffix) -MM ListElement.cpp

../build-$(ConfigurationName)/EjercicioEEDD/ListElement.cpp$(PreprocessSuffix): ListElement.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/EjercicioEEDD/ListElement.cpp$(PreprocessSuffix) ListElement.cpp

../build-$(ConfigurationName)/EjercicioEEDD/QueueElement.cpp$(ObjectSuffix): QueueElement.cpp ../build-$(ConfigurationName)/EjercicioEEDD/QueueElement.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/sergi/OneDrive/Documentos/Documentos/EjercicioEEDD/QueueElement.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/QueueElement.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/EjercicioEEDD/QueueElement.cpp$(DependSuffix): QueueElement.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/EjercicioEEDD/QueueElement.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/EjercicioEEDD/QueueElement.cpp$(DependSuffix) -MM QueueElement.cpp

../build-$(ConfigurationName)/EjercicioEEDD/QueueElement.cpp$(PreprocessSuffix): QueueElement.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/EjercicioEEDD/QueueElement.cpp$(PreprocessSuffix) QueueElement.cpp

../build-$(ConfigurationName)/EjercicioEEDD/List.cpp$(ObjectSuffix): List.cpp ../build-$(ConfigurationName)/EjercicioEEDD/List.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/sergi/OneDrive/Documentos/Documentos/EjercicioEEDD/List.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/List.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/EjercicioEEDD/List.cpp$(DependSuffix): List.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/EjercicioEEDD/List.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/EjercicioEEDD/List.cpp$(DependSuffix) -MM List.cpp

../build-$(ConfigurationName)/EjercicioEEDD/List.cpp$(PreprocessSuffix): List.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/EjercicioEEDD/List.cpp$(PreprocessSuffix) List.cpp

../build-$(ConfigurationName)/EjercicioEEDD/Queue.cpp$(ObjectSuffix): Queue.cpp ../build-$(ConfigurationName)/EjercicioEEDD/Queue.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/sergi/OneDrive/Documentos/Documentos/EjercicioEEDD/Queue.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Queue.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/EjercicioEEDD/Queue.cpp$(DependSuffix): Queue.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/EjercicioEEDD/Queue.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/EjercicioEEDD/Queue.cpp$(DependSuffix) -MM Queue.cpp

../build-$(ConfigurationName)/EjercicioEEDD/Queue.cpp$(PreprocessSuffix): Queue.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/EjercicioEEDD/Queue.cpp$(PreprocessSuffix) Queue.cpp

../build-$(ConfigurationName)/EjercicioEEDD/ListElementData.cpp$(ObjectSuffix): ListElementData.cpp ../build-$(ConfigurationName)/EjercicioEEDD/ListElementData.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/sergi/OneDrive/Documentos/Documentos/EjercicioEEDD/ListElementData.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ListElementData.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/EjercicioEEDD/ListElementData.cpp$(DependSuffix): ListElementData.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/EjercicioEEDD/ListElementData.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/EjercicioEEDD/ListElementData.cpp$(DependSuffix) -MM ListElementData.cpp

../build-$(ConfigurationName)/EjercicioEEDD/ListElementData.cpp$(PreprocessSuffix): ListElementData.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/EjercicioEEDD/ListElementData.cpp$(PreprocessSuffix) ListElementData.cpp

../build-$(ConfigurationName)/EjercicioEEDD/QueueElementData.cpp$(ObjectSuffix): QueueElementData.cpp ../build-$(ConfigurationName)/EjercicioEEDD/QueueElementData.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/sergi/OneDrive/Documentos/Documentos/EjercicioEEDD/QueueElementData.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/QueueElementData.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/EjercicioEEDD/QueueElementData.cpp$(DependSuffix): QueueElementData.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/EjercicioEEDD/QueueElementData.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/EjercicioEEDD/QueueElementData.cpp$(DependSuffix) -MM QueueElementData.cpp

../build-$(ConfigurationName)/EjercicioEEDD/QueueElementData.cpp$(PreprocessSuffix): QueueElementData.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/EjercicioEEDD/QueueElementData.cpp$(PreprocessSuffix) QueueElementData.cpp

../build-$(ConfigurationName)/EjercicioEEDD/Core.cpp$(ObjectSuffix): Core.cpp ../build-$(ConfigurationName)/EjercicioEEDD/Core.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/sergi/OneDrive/Documentos/Documentos/EjercicioEEDD/Core.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Core.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/EjercicioEEDD/Core.cpp$(DependSuffix): Core.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/EjercicioEEDD/Core.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/EjercicioEEDD/Core.cpp$(DependSuffix) -MM Core.cpp

../build-$(ConfigurationName)/EjercicioEEDD/Core.cpp$(PreprocessSuffix): Core.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/EjercicioEEDD/Core.cpp$(PreprocessSuffix) Core.cpp

../build-$(ConfigurationName)/EjercicioEEDD/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/EjercicioEEDD/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/sergi/OneDrive/Documentos/Documentos/EjercicioEEDD/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/EjercicioEEDD/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/EjercicioEEDD/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/EjercicioEEDD/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/EjercicioEEDD/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/EjercicioEEDD/main.cpp$(PreprocessSuffix) main.cpp

../build-$(ConfigurationName)/EjercicioEEDD/DicTree.cpp$(ObjectSuffix): DicTree.cpp ../build-$(ConfigurationName)/EjercicioEEDD/DicTree.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/sergi/OneDrive/Documentos/Documentos/EjercicioEEDD/DicTree.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/DicTree.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/EjercicioEEDD/DicTree.cpp$(DependSuffix): DicTree.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/EjercicioEEDD/DicTree.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/EjercicioEEDD/DicTree.cpp$(DependSuffix) -MM DicTree.cpp

../build-$(ConfigurationName)/EjercicioEEDD/DicTree.cpp$(PreprocessSuffix): DicTree.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/EjercicioEEDD/DicTree.cpp$(PreprocessSuffix) DicTree.cpp


-include ../build-$(ConfigurationName)/EjercicioEEDD//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


