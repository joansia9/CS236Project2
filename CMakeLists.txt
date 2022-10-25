cmake_minimum_required(VERSION 3.23)
project(project_1)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(project_1 main.cpp
        ColonAutomaton.cpp
        ColonAutomaton.h
        ColonDashAutomaton.cpp
        ColonDashAutomaton.h
        Token.cpp
        Lexer.cpp
        CommaAutomaton.h
        PeriodAutomaton.h
        Q_MarkAutomaton.cpp
        Q_MarkAutomaton.h
        Left_ParenAutomaton.h
        MultiplyAutomaton.h
        AddAutomaton.h
        Right_ParenAutomata.cpp
        Right_ParenAutomata.h
        CommentAutomaton.h
        End_Of_FileAutomaton.h
        FactsAutomaton.h
        QueriesAutomaton.h
        RulesAutomaton.h
        IDAutomaton.h
        SchemesAutomaton.h
        StringAutomaton.h
        datalogProgram.h
        Predicate.h
        Parameter.h
        Rule.h
        Parser.h)
