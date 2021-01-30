#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>

#include "jelf.h"

static int file_header_flag = 0;
static int program_headers_flag = 0;
static int section_headers_flag = 0;
static int syms_flag = 0;
static int relocs_flag = 0;
static int dynamic_flag = 0;
static int help_flag = 0;
static int version_flag = 0;

int main(int argc, char *argv[]) {
	int c;

	if (argc < 2) {
		usage(stderr);
		return EXIT_FAILURE;
	}

	while (1) {
		static struct option long_options[] = {
			{"all",     no_argument, 0, 'a'},
			{"file-header",  no_argument, &file_header_flag, 'h'},
			{"program-headers", no_argument, &program_headers_flag, 'l'},
			{"section-headers",  no_argument, &section_headers_flag, 'S'},
			{"syms",  no_argument, &syms_flag, 's'},
			{"relocs",  no_argument, &relocs_flag, 'r'},
			{"dynamic",  no_argument, &dynamic_flag, 'd'},
			{"help", no_argument, &help_flag, 'H'},
			{"version", no_argument, &version_flag, 'V'},
			{0, 0, 0, 0}
		};

		int option_index = 0;

		c = getopt_long (argc, argv, "ahlSsrdHv",
				long_options, &option_index);

		if (c == -1) {
			break;
		}

		switch (c) { 
			case 'a': break;
			case 'h': break;
			case 'l': break;
			case 'S': break;
			case 's': break;
			case 'r': break;
			case 'd': break;
			case 'H': break;
			case 'v': 
				  usage(stderr);
				  break;
			default:
				  printf("xxx\n");
		}
	}

	if (optind < argc) {
		printf ("Paring ELF file:\n");
		while (optind < argc) {
			printf ("%s ", argv[optind++]);
		}
		printf ("End Paring ELF file:\n");
	} else {
	}

	return EXIT_SUCCESS;
}
