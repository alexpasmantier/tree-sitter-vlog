# 🌳 tree-sitter-vlog
A simple `tree-sitter` grammar for https://github.com/tjdevries/vlog.nvim.

<img width="1147" alt="Screenshot 2024-07-31 at 01 39 12" src="https://github.com/user-attachments/assets/5585fbf1-7400-4e52-88a4-30b8ec0075cd">

## What's `vlog`?
`vlog` is a simple and straightforward logger implementation in lua for neovim made by [@tjdevries](https://github.com/tjdevries) : https://github.com/tjdevries/vlog.nvim

This grammar simply provides syntax highlighting for the format it writes to (**assuming log files are saved as `*.vlog`**).

## Setting this up in Neovim
If you're already using tree-sitter, simply add the following lines somewhere in your Neovim config:
```lua
      -- Adding support for vlog syntax highlighting

      -- register the new filetype
      vim.filetype.add({
        extension = {
          vlog = "vlog",
        },
      })

      -- add the vlog tree-sitter parser
      local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
      parser_config.vlog = {
        install_info = {
          url = "https://github.com/alexpasmantier/tree-sitter-vlog",
          files = { "src/parser.c" },
        },
        filetype = "vlog", -- if filetype does not match the parser name
      }

      -- register the vlog parser to be used for vlog filetypes
      vim.treesitter.language.register("vlog", "vlog")
```
