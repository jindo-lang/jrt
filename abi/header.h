#include <cstdint>

#define SHT_NULL 0           /* Section header table entry unused */
#define SHT_PROGBITS 1       /* Program data */
#define SHT_SYMTAB 2         /* Symbol table */
#define SHT_STRTAB 3         /* String table */
#define SHT_RELA 4           /* Relocation entries with addends */
#define SHT_HASH 5           /* Symbol hash table */
#define SHT_DYNAMIC 6        /* Dynamic linking information */
#define SHT_NOTE 7           /* Notes */
#define SHT_NOBITS 8         /* Program space with no data (bss) */
#define SHT_REL 9            /* Relocation entries, no addends */
#define SHT_SHLIB 10         /* Reserved */
#define SHT_DYNSYM 11        /* Dynamic linker symbol table */
#define SHT_INIT_ARRAY 14    /* Array of constructors */
#define SHT_FINI_ARRAY 15    /* Array of destructors */
#define SHT_PREINIT_ARRAY 16 /* Array of pre-constructors */
#define SHT_GROUP 17         /* Section group */
#define SHT_SYMTAB_SHNDX 18  /* Extended section indeces */
#define SHT_NUM 19           /* Number of defined types.  */

struct Header {
    uint32_t ident;      /* Magic number and other info */
    uint32_t type;       /* Object file type */
    uint32_t entry;      /* Entry point virtual address */
    uint32_t memalloc;   /* Memory allocation size for runtime */
    uint32_t shoff;      /* Section header table file offset */
    uint32_t shnum;      /* Section header table entry count */
    uint32_t shstrndx;   /* Section header string table index */
};

struct SectionHeader {
    uint32_t name;       /* Section name (string table index) */
    uint32_t type;       /* Section type */
    uint32_t flags;      /* Section flags */
    uint32_t addr;       /* Section virtual address at execution */
    uint32_t offset;     /* Section file offset */
    uint32_t size;       /* Section size in bytes */
    uint32_t link;       /* Link to another section */
    uint32_t info;       /* Additional section info */
    uint32_t addralign;  /* Section alignment */
    uint32_t entsize;    /* Entry size if section holds table */
};
