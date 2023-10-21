#include "main.h"

/**
 * pChecks dex
 * @e_ident: A pointer to  ELF magic numbers.
 */
void pcheck(unsigned char *e_ident)
{
	int dex = 0;

	while (dex < 4)
	{
		if (e_ident[dex] != 127 &&
			e_ident[dex] != 'E' &&
			e_ident[dex] != 'L' &&
			e_ident[dex] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
		dex = dex + 1;
	}
}


/**
 * pclass - Prints the class of an ELF hder.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void pclass(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * pdata - Prints the data of an ELF hder.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void pdata(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 * pmagic - Prints the magic numbers of an ELF hder.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void pmagic(unsigned char *e_ident)
{
	int dex = 0;

	printf("  Magic:   ");

	while (dex < EI_NIDENT)
	{
		printf("%02x", e_ident[dex]);

		if (dex == EI_NIDENT - 1)
		{
			printf("\n");
		}
		else
			printf(" ");
		dex++;
	}
}

/**
 * pversion - Prints the version of an ELF hder.
 * @e_ident: A pointer to an array containing the ELF version.
 */
void pversion(unsigned char *e_ident)
{
	printf("  Version:                           %d",
		e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * posabi - Prints the OS/ABI of an ELF hder.
 * @e_ident: A pointer to an array containing the ELF version.
 */
void posabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * pabi - Prints the ABI version of an ELF hder.
 * @e_ident: A pointer to an array containing the ELF ABI version.
 */
void pabi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
		   e_ident[EI_ABIVERSION]);
}

/**
 * ptype - Prints the type of an ELF hder.
 * @e_type: The ELF type.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void ptype(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * p_entry - Prints the _entry point of an ELF hder.
 * @e_ident: The address of the ELF _entry point.
 * @e_entry: A pointer to an array containing the ELF class.
 */
void p_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * c_elf - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 */

void c_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays
 * @argv: pointers to the arguments.
 * @argc: The number of arguments
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *hder;
	int a, b;

	a = open(argv[1], O_RDONLY);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	hder = malloc(sizeof(Elf64_Ehdr));
	if (hder == NULL)
	{
		c_elf(a);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	b = read(a, hder, sizeof(Elf64_Ehdr));
	if (b == -1)
	{
		free(hder);
		c_elf(a);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	pcheck(hder->e_ident);
	printf("ELF hder:\n");
	pmagic(hder->e_ident);
	pclass(hder->e_ident);
	pdata(hder->e_ident);
	pversion(hder->e_ident);
	posabi(hder->e_ident);
	pabi(hder->e_ident);
	ptype(hder->e_type, hder->e_ident);
	p_entry(hder->e_entry, hder->e_ident);

	free(hder);
	c_elf(a);
	return (0);
}
