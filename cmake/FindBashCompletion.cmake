pkg_check_modules(BASH_COMPLETION "bash-completion")

if (BASH_COMPLETION_FOUND)
    execute_process(COMMAND ${PKG_CONFIG_EXECUTABLE}
        --variable=completionsdir bash-completion
        OUTPUT_VARIABLE BASH_COMPLETION_COMPLETIONSDIR)
endif (BASH_COMPLETION_FOUND)
