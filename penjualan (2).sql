-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Waktu pembuatan: 02 Jun 2024 pada 14.45
-- Versi server: 10.4.27-MariaDB
-- Versi PHP: 8.0.25

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `penjualan`
--

-- --------------------------------------------------------

--
-- Struktur dari tabel `barang`
--

CREATE TABLE `barang` (
  `kode_barang` varchar(15) NOT NULL,
  `nama_barang` varchar(20) NOT NULL,
  `harga_barang` varchar(25) NOT NULL,
  `satuan` varchar(20) NOT NULL,
  `stok` varchar(25) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data untuk tabel `barang`
--

INSERT INTO `barang` (`kode_barang`, `nama_barang`, `harga_barang`, `satuan`, `stok`) VALUES
('8900', 'hotweels', '600000', '1', '4');

-- --------------------------------------------------------

--
-- Struktur dari tabel `kembali`
--

CREATE TABLE `kembali` (
  `no_retur` varchar(15) NOT NULL,
  `kode_barang` varchar(15) NOT NULL,
  `jumlah_kembali` varchar(25) NOT NULL,
  `alasan` varchar(25) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data untuk tabel `kembali`
--

INSERT INTO `kembali` (`no_retur`, `kode_barang`, `jumlah_kembali`, `alasan`) VALUES
('19', '777', '10000', 'lunas');

-- --------------------------------------------------------

--
-- Struktur dari tabel `pelanggan`
--

CREATE TABLE `pelanggan` (
  `nama` varchar(25) NOT NULL,
  `alamat` varchar(25) NOT NULL,
  `telpon` varchar(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data untuk tabel `pelanggan`
--

INSERT INTO `pelanggan` (`nama`, `alamat`, `telpon`) VALUES
('abay', 'banjar', '890');

-- --------------------------------------------------------

--
-- Struktur dari tabel `pesanan`
--

CREATE TABLE `pesanan` (
  `kode_pesanan` varchar(15) NOT NULL,
  `kode_pelanggan` varchar(20) NOT NULL,
  `tgl_kirim` date NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data untuk tabel `pesanan`
--

INSERT INTO `pesanan` (`kode_pesanan`, `kode_pelanggan`, `tgl_kirim`) VALUES
('02938', '930384', '0000-00-00'),
('10292', '1029292', '0000-00-00'),
('203939', '1929383', '0000-00-00'),
('21', '121', '0000-00-00');

-- --------------------------------------------------------

--
-- Struktur dari tabel `tulis`
--

CREATE TABLE `tulis` (
  `kode_pesanan` varchar(15) NOT NULL,
  `kode_barang` varchar(10) NOT NULL,
  `jumlah_pesanan` varchar(25) NOT NULL,
  `harga_pesanan` varchar(25) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data untuk tabel `tulis`
--

INSERT INTO `tulis` (`kode_pesanan`, `kode_barang`, `jumlah_pesanan`, `harga_pesanan`) VALUES
('9898', '7878', '5', '50000');

--
-- Indexes for dumped tables
--

--
-- Indeks untuk tabel `barang`
--
ALTER TABLE `barang`
  ADD PRIMARY KEY (`kode_barang`);

--
-- Indeks untuk tabel `kembali`
--
ALTER TABLE `kembali`
  ADD PRIMARY KEY (`no_retur`);

--
-- Indeks untuk tabel `pelanggan`
--
ALTER TABLE `pelanggan`
  ADD PRIMARY KEY (`nama`);

--
-- Indeks untuk tabel `pesanan`
--
ALTER TABLE `pesanan`
  ADD PRIMARY KEY (`kode_pesanan`);

--
-- Indeks untuk tabel `tulis`
--
ALTER TABLE `tulis`
  ADD PRIMARY KEY (`kode_pesanan`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
