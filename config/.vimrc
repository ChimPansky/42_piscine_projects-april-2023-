"show line numbers:
set number
"show relative line numbers:
set relativenumber
"show command that has just been typed in normal mode:
set showcmd
"define the width of a tab:
set tabstop=4
"replace tab characters with spaces when pressing tab key:
"set expandtab
"the number of spaces a tab is replaced with:
"set shiftwidth=4
"automatically copies the indentation of the previous line when pressing Enter:
set autoindent
"showing a horizontal line below the cursor:
"set cursorline
"enable mouse selecting:
set mouse=a
"highlight first search occurence when searching with /searchterm in normal mode:
set incsearch
"highlight all matches when searching with /searchterm in normal mode:
set hlsearch
"avoid losing selection after indenting a block of code in visual mode (v -> select lines -> indentkey </>):
vnoremap < <gv
vnoremap > >gv
syntax on
"display filename, modified flag [+], [current line, total lines], [percentage of selected line in respect to total lines]:
set statusline=%F%m%w[%L,%v][%p%%]
"always show statusbar at bottom of window:
set laststatus=2
