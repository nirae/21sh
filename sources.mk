SRCS+=src/builtins/cd/build_pwd_tab.c
SRCS+=src/builtins/cd/cd_builtin.c
SRCS+=src/builtins/cd/check_path_errors.c
SRCS+=src/builtins/cd/ft_realloc_addend_tab.c
SRCS+=src/builtins/cd/ft_stringtab_len.c
SRCS+=src/builtins/cd/ft_strjointab.c
SRCS+=src/builtins/cd/get_final_path.c
SRCS+=src/builtins/cd/get_pwd_for_cd.c
SRCS+=src/builtins/echo_builtin.c
SRCS+=src/builtins/exit_builtin.c
SRCS+=src/builtins/export_builtin.c
SRCS+=src/builtins/manage_builtins.c
SRCS+=src/builtins/set_builtin.c
SRCS+=src/builtins/setenv_builtin.c
SRCS+=src/builtins/unset_builtin.c
SRCS+=src/builtins/unsetenv_builtin.c
SRCS+=src/clean_shell_data.c
SRCS+=src/debug/debug.c
SRCS+=src/environment/add_env_var.c
SRCS+=src/environment/change_env_var.c
SRCS+=src/environment/create_minimal_env.c
SRCS+=src/environment/create_varenv.c
SRCS+=src/environment/del_env_var.c
SRCS+=src/environment/env_lst_to_tab.c
SRCS+=src/environment/env_tab_to_lst.c
SRCS+=src/environment/get_env_var_by_name.c
SRCS+=src/environment/remove_env_var.c
SRCS+=src/exec/aggr_recursion.c
SRCS+=src/exec/aggr_redir_execution.c
SRCS+=src/exec/catch_signal_kill.c
SRCS+=src/exec/exec_ast.c
SRCS+=src/exec/exec_command.c
SRCS+=src/exec/get_path_of_bin.c
SRCS+=src/exec/get_path_of_bin_tools.c
SRCS+=src/exec/heredoc.c
SRCS+=src/exec/pipe_execution.c
SRCS+=src/exec/redir_recursion.c
SRCS+=src/ft_lstcpy.c
SRCS+=src/get_line/get_line.c
SRCS+=src/get_line/terms/clean_line.c
SRCS+=src/get_line/terms/del.c
SRCS+=src/get_line/terms/enter.c
SRCS+=src/get_line/terms/history.c
SRCS+=src/get_line/terms/home_end.c
SRCS+=src/get_line/terms/init_term.c
SRCS+=src/get_line/terms/manag_way.c
SRCS+=src/get_line/terms/mouv.c
SRCS+=src/get_line/terms/mouv_word.c
SRCS+=src/get_line/terms/multi.c
SRCS+=src/get_line/terms/print.c
SRCS+=src/get_line/terms/selec/cut.c
SRCS+=src/get_line/terms/selec/paste.c
SRCS+=src/get_line/terms/selec/selec.c
SRCS+=src/get_line/terms/selec/selec_mouv.c
SRCS+=src/get_line/terms/set_key.c
SRCS+=src/get_line/terms/set_terms.c
SRCS+=src/get_line/terms/supp.c
SRCS+=src/get_line/terms/utils.c
SRCS+=src/main.c
SRCS+=src/minimal_shell/read_prompt.c
SRCS+=src/options.c
SRCS+=src/parsing/ast/ast.c
SRCS+=src/parsing/ast/delete_ast.c
SRCS+=src/parsing/ast/procedures.c
SRCS+=src/parsing/lexer/automaton_transition.c
SRCS+=src/parsing/lexer/build_command_token.c
SRCS+=src/parsing/lexer/build_command_token_tools.c
SRCS+=src/parsing/lexer/delete_list_tokens.c
SRCS+=src/parsing/lexer/first_check/first_check_aggregations.c
SRCS+=src/parsing/lexer/first_check/first_check_heredoc.c
SRCS+=src/parsing/lexer/first_check/first_check_operators.c
SRCS+=src/parsing/lexer/first_check/first_check_redirections.c
SRCS+=src/parsing/lexer/first_check/first_check_tokens_list.c
SRCS+=src/parsing/lexer/first_check/first_check_variables.c
SRCS+=src/parsing/lexer/first_check/return_syntax_error.c
SRCS+=src/parsing/lexer/get_index_from_char.c
SRCS+=src/parsing/lexer/get_type_of_token.c
SRCS+=src/parsing/lexer/is_acceptor.c
SRCS+=src/parsing/lexer/is_ignored.c
SRCS+=src/parsing/lexer/lexer.c
SRCS+=src/parsing/lexer/lexer_tools.c
SRCS+=src/parsing/lexer/stack.c
SRCS+=src/parsing/lexer/token_constructor.c
SRCS+=src/parsing/lexer/unexpected_token_error.c
SRCS+=src/parsing/parser.c
SRCS+=src/parsing/syntax_tree/a_rule.c
SRCS+=src/parsing/syntax_tree/b_rule.c
SRCS+=src/parsing/syntax_tree/c_rule.c
SRCS+=src/parsing/syntax_tree/delete_parsing_tree.c
SRCS+=src/parsing/syntax_tree/f_rule.c
SRCS+=src/parsing/syntax_tree/ft_ptree.c
SRCS+=src/parsing/syntax_tree/s_rule.c
SRCS+=src/parsing/syntax_tree/syntax_tree.c
SRCS+=src/parsing/syntax_tree/t_rule.c
SRCS+=src/parsing/syntax_tree/test_current_token.c
SRCS+=src/parsing/syntax_tree/u_rule.c
SRCS+=src/parsing/syntax_tree/v_rule.c
SRCS+=src/quit_shell.c
SRCS+=src/shell_data_singleton.c
SRCS+=src/tokens/args_token.c
SRCS+=src/tokens/compare_tokens.c
SRCS+=src/tokens/expansion_token.c
SRCS+=src/tokens/free_token.c
SRCS+=src/tokens/get_cmd_tab.c
SRCS+=src/tokens/get_env_var.c
SRCS+=src/tokens/get_var_tab.c
SRCS+=src/tokens/get_var_tab_for_unset.c
SRCS+=src/tokens/get_var_tab_tools.c
SRCS+=src/tokens/replace_dollar.c
SRCS+=src/tokens/replace_tilde.c
SRCS+=src/tokens/token_token.c
SRCS+=src/tokens/type_token.c
SRCS+=src/tokens/var_list_in_cmd_token.c
SRCS+=src/tokens/var_list_token.c
SRCS+=src/tokens/var_token_in_cmd_token.c
