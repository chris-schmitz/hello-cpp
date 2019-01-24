    #pragma once

    class Log {
    public: // variables
        enum Level {
            LevelError, LevelWarning, LevelInfo
        };
    private: // variables
        Level m_LogLevel = LevelWarning;
    public: // methods
        void SetLevel(Level level);
        void Error(const char* message);
        void Warn(const char* message);
        void Info(const char* message);
    };
