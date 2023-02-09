#include "elf.h"
#include "main.h"

/**
 * main - display informationin ELF header
 * @argc: argument count
 * @argv: argument vector
 * Return: On success 0, On failure 1
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf32_Ehdr ehdr;

	if (argc != 2)
	{
		printf("Usage: %s <elf_file>\n", argv[0]);
		return (1);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd > 0)
	{
		printf("Error: Unable to open file %s\n", argv[1]);
		return (1);
	}

	if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr))
	{
		printf("Error: Unable to read ELF header\n");
		close(fd);
		return (1);
	}

	printf("ELF Header:\n");
	printf("  Magic:   %02x %02x %02x %02x\n", ehdr.e_ident[0], ehdr.e_ident[1],
			ehdr.e_ident[2], ehdr.e_ident[3]);
	printf("  Class:                             %d\n", ehdr.e_ident[4]);
	printf("  Data:                              %d\n", ehdr.e_ident[5]);
	printf("  Version:                           %d\n", ehdr.e_ident[6]);
	printf("  OS/ABI:                            %d\n", ehdr.e_ident[7]);
	printf("  ABI Version:                       %d\n", ehdr.e_ident[8]);
	printf("  Type:                              %d\n", ehdr.e_type);
	printf("  Machine:                           %d\n", ehdr.e_machine);
	printf("  Version:                           %d\n", ehdr.e_version);
	printf("  Entry point address:               0x%x\n", ehdr.e_entry);

	close(fd);
	return (0);
}
