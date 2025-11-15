GIT_ADD = git add .
GIT_COMMIT = git commit -m "cpp02"
GIT_PUSH = git push 

all:
	$(GIT_ADD) && $(GIT_COMMIT) && $(GIT_PUSH)
