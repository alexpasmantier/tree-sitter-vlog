((log_level) @trace
(#eq? @trace "TRACE"))

((log_level) @debug
(#eq? @debug "DEBUG"))

((log_level) @info
(#eq? @info "INFO"))

((log_level) @warn
(#eq? @warn "WARN"))

((log_level) @error
(#eq? @error "ERROR"))

((log_level) @fatal
(#eq? @fatal "FATAL"))

(timestamp) @timestamp
(file_path) @file_path
(line_number) @line_number
(message) @message
